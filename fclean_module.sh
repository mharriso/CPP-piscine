if [ $# -ne 2 ]
then
echo "first argument must be number of module XX"
echo "second argument must be the number of exercises"
else
cd module_$1
for (( i=0; i < $2; i++ ))
do
cd ex0$i
echo $PWD
make fclean
cd ..
done
fi
