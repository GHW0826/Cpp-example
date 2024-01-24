#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

// 첫번째 인자 컨테이너에 매칭 되는 가변 인자의 수를 리턴하는 함수
template<typename R, typename ... Ts>
auto matches(const R& range, Ts ... ts)
{
    return (std::count(std::begin(range), std::end(range), ts) + ...);
}

// set에 가변인자를 insert하고 모두 성공했는지 확인 하는 헬퍼함수
// 전달 받은 가변인수 모두를 set에 삽입하고 모두 성공했는지 반환 받습니다.
template<typename T, typename ... Ts>
bool insert_all(T& set, Ts ... ts) {
    // set.insert의 반환 값을 pair<iterator, bool>의 값을 가짐
    return (set.insert(ts).second && ...);
}

// 가변인자 템플릿과 상속을 활용한 Tuple 구현
// xtuple 
template<typename ... Types> struct xtuple
{
    static constexpr int N = 0;
};

template<typename T, typename ... Types>
struct xtuple<T, Types...> : public xtuple<Types...>
{
    T value;
    xtuple() = default;
    xtuple(const T& v, const Types& ... args) : value(v), xtuple<Types...>(args...) {}
    static constexpr int N = xtuple<Types...>::N + 1;
};

// xtuple_element_type
template<int N, typename T> 
struct xtuple_element_type;

template<typename T, typename ... Types>
struct xtuple_element_type<0, xtuple<T, Types...>>
{
    typedef T type;
    typedef xtuple<T, Types...> tupleType;
};
template<int N, typename T, typename ... Types>
struct xtuple_element_type<N, xtuple<T, Types...>>
{
    typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::type      type;
    typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::tupleType tupleType;
};
// get
template<int N, typename T> typename xtuple_element_type<N, T>::type& xget(T& tp)
{
    return static_cast<typename xtuple_element_type<N, T>::tupleType&>(tp).value;
}
// Tuple의 모든 요소 출력하기
// std tuple의 index 자리에는 변수를 사용 할 수 없으므로 loop 순회가 불가능
// std의 index_squence를 활용하면 모든 요소를 순회 하는 표현이 가능
template<typename TP, size_t ... I >
void print_tuple_imp(const TP& tp, const index_sequence<I...>&) // I : 0, 1, 2
{
    int x[] = { get<I>(tp)... }; // get<0>(tp), get<1>(tp), get<2>(tp)
    for (auto& n : x)
        cout << n << ", ";
}

template<typename TP> void print_tuple(const TP& tp)
{
    print_tuple_imp(tp, make_index_sequence<tuple_size<TP>::value>());
}


class FoldExpression
{
public:
    void Example() {
        vector<int> v{ 1,2,3,4,5 };
        cout << matches(v, 2, 5) << '\\n';           // 2 반환
        cout << matches(v, 100, 200) << '\\n';       // 0 반환
        cout << matches("abcdefg", 'x', 'y', 'z') << '\\n';       // 0 반환
        cout << matches("abcdefg", 'a', 'd', 'f') << '\\n';       // 3 반환


        set<int> my_set{ 1, 2, 3 };
        cout << insert_all(my_set, 4, 5, 6) << '\\n';        // true
        cout << insert_all(my_set, 7, 8, 2) << '\\n';        // false => 2 값을 insert 중복으로 false


        // xtuple
        xtuple<int, double, char> t3(1, 3.4, 'A');

        xget<0>(t3) = 10;

        cout << xget<0>(t3) << endl; // 10
        cout << xget<1>(t3) << endl; // 3.4
        cout << xget<2>(t3) << endl; // 'A'


        // tuple orders
        tuple<int, int, int> tp(1, 2, 3);
        print_tuple(tp);
    }
};