#! /bin/sh

echo "Make sure to define to following variables:"
echo "CROSS"
echo "PCD_DIR"
if [ -z "$PCD_DIR" ]; then
	export PCD_DIR=/home/root/pcd-1.1.6
fi
echo "PCD_LIBS_DIR"
if [ -z "$PCD_LIBS_DIR" ]; then
	export PCD_LIBS_DIR=/lib
fi

# Generate a header file
echo -e "\nGenerating a header file..."
pcdparser -f scripts/examples.pcd -o src/example_rules.h

# Generate a graph
echo -e "\nGenerating a graph file..."
pcdparser -f scripts/examples.pcd -g ./graphs/examples.txt

echo -e "\nBuilding examples...\n"
cd src

files=`ls -1 *.c | awk -F"." '{ print $1 }'`

for i in $files
do
   echo Compiling ${i}.c
   ${CROSS}gcc ${i}.c -I ${PCD_DIR}/include -L ${PCD_LIBS_DIR} -lipc -lpcd -lrt -o ../bin/${i}
   if [ $? != 0 ]; then
		echo Compilation failed, please check your configuration.
		exit 1
   fi
done
