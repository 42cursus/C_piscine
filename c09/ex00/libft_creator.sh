#!/bin/sh

NAME="libft.a"
CC=cc
BUILD_DIR="build"
MANDATORY_FLAGS="-Wall -Wextra -Werror"
LIB_COMMAND="ar rcs"
SOURCES=$(cat <<-EOF
	ft_putchar.c
	ft_putstr.c
	ft_strcmp.c
	ft_strlen.c
	ft_swap.c
EOF
)
TARGETS=$(echo ${SOURCES} | sed 's/\b\(\w*\).c\b/\1/g')
OBJECTS=$(echo ${SOURCES} | sed "s/\b\(\w*\).c\b/${BUILD_DIR}\/\1.o/g")

echo ${TARGETS}

mkdir -pv "${BUILD_DIR}"

for target in ${TARGETS}; do
	echo "Compiling target: ${target}"
	"${CC}" ${MANDATORY_FLAGS} -c "${target}.c" -o "${BUILD_DIR}/${target}.o"
done

echo "Assembling the library: ${NAME}"
${LIB_COMMAND} ${NAME} ${OBJECTS}
