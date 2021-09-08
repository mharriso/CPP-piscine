
RESET='\033[0m'
RED='\033[31m'
GREEN='\033[32m'
YELLOW='\033[33m'
BLUE='\033[34;1m'
array=(42 21 a21 42a 123.45 2..1 9999999999999999999999999999)

for index in ${!array[*]}
do
	echo $BLUE'-------------------------------------------------------'$RESET
	printf "%*sTEST \"%s\"\n" $(((55-5-${#array[index]})/2)) " " ${array[$index]}
    #printf "       TEST \"%s\"\n" ${array[$index]}
	echo $BLUE'-------------------------------------------------------'$RESET
	./converter ${array[$index]}
	sleep 1
done
