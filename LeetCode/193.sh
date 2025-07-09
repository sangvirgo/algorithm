#!/bin/sh

while read -r line; do
  echo "Đọc được dòng: $line"
done < "file.txt"