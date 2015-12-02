#!/bin/bash
if [ "$#" == "2" ]
  then
  declare -a HEADERS
  declare -a CODE
  HEADERS=($(find $1 -name '*.h' | tr '\n' ' '))
  CODE=($(find $1 -name '*.cpp' | tr '\n' ' '))
  mkdir -p $2
  for i in "${HEADERS[@]}"
  do
    cp -v $i $2
  done
  for i in "${CODE[@]}"
  do
    cp -v $i $2
  done
else echo "Use: $0 source dest"
fi
