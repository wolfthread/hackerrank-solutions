for val in {1..99}
do
    if [ $(($val%2)) -ne 0 ]
    then
        echo $val
    fi
done
