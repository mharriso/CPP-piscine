
RESET='\033[0m'
RED='\033[31m'
GREEN='\033[32m'
YELLOW='\033[33m'
BLUE='\033[34;1m'
array=(nan -inf +inf -inff +inff nanf nannn
		0 42.0f 21 a21 b55.5 123.45 777w 4..4 99.99ff 77.0008)

for index in ${!array[*]}
do
	echo $BLUE'-------------------------------------------------------'$RESET
	printf "%*sTEST \"%s\"\n" $(((55-5-${#array[index]})/2)) " " ${array[$index]}
	echo $BLUE'-------------------------------------------------------'$RESET
	./converter ${array[$index]}
	#sleep 1
done
