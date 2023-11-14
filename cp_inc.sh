#!/bin/bash


if [ $# -ne 2 ]; then
  echo "사용법: $0 <source_directory> <target_directory>"
  exit 1
fi

# source_directory와 target_directory가 실제로 디렉터리인지 확인
if [ ! -d "$1" ]; then
  echo "Error: 원본 디렉터리 '$1'가 존재하지 않습니다."
  exit 1
fi

source_directory="$1"
target_directory="$2"

echo "source_directory: $source_directory"
echo "target_directory: $target_directory"

# 헤더 파일을 찾아 대상 디렉터리로 복사
find "$source_directory" -type f -name "*.inc" -exec sh -c '
  # 원본 디렉터리 경로
  source_directory='$1'

  # 대상 디렉터리 경로
  target_directory='$2'

  for file do

    relative_path="${file#$source_directory}"
    target_path="$target_directory$relative_path"
    target_dir="$(dirname "$target_path")"

    mkdir -p "$target_dir"

    cp "$file" "$target_path"
    echo "복사: $file -> $target_path"
  done
' sh {} +

echo "헤더 파일 복사가 완료되었습니다."
