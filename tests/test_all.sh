#!/bin/sh

#
#   Дмитрий Изволов.
#   23 августа 2012 года.
#

files=(`find . -name "*.cpp"`)
for file in ${files[@]};
do
    echo "$file `./run_test.sh $file`"
done
