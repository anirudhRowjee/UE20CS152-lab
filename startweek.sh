#!/bin/bash

# script to start a cs project
# usage : ./startweek.sh <week_number> <programs> <practice_programs> <compile=0>
# puts everything in a folder called week<week_number>
# creates <programs> + <practice_programs> folders
# creates a main.c, utils.h, utils.c, question.txt, output.txt, Makfile in each folder

# command line argument parsing
WEEK_NUMBER=$1
PROGRAMS=$2
PRACTICE_PROGRAMS=$3
COMPILE=$4

# setting some constants
NAME="ANIRUDH ROWJEE"
SRN="PES2UG20CS050"
FILENAME="ANIRUDHROWJEE_PES2UG20CS050_WEEK${WEEK_NUMBER+1}.md" # TODO fix this
ROOTDIR="week${WEEK_NUMBER}"

RANGE_TASKS=$(eval "seq -s , ${PROGRAMS}")
RANGE_PRACTICE=$(eval "seq -s , ${PRACTICE_PROGRAMS}")
TASK_FOLDER_SET="t{${RANGE_TASKS}}"
PRACTICE_FOLDER_SET="pp{${RANGE_PRACTICE}}"
FINAL_FOLDER_SET="{${TASK_FOLDER_SET},${PRACTICE_FOLDER_SET}}"

FOLDER_CREATION_COMMAND="mkdir -p ${FINAL_FOLDER_SET}"
FILE_CREATION_COMMAND="touch ${FINAL_FOLDER_SET}/{main.c,utils.c,utils.h,Makefile,question.txt,output.txt}"

if [[ COMPILE -eq 1 ]]
then
    # scrape all the output from the respective places, and dump it into the markdown file
    echo "Compiling week${WEEK_NUMBER} with ${PROGRAMS} tasks and ${PRACTICE_PROGRAMS} practices."
    echo "Compiling into ${FILENAME}"
    cd "$ROOTDIR"
    touch "$FILENAME"
    echo "# Week ${WEEK_NUMBER}" > "$FILENAME"
    echo "${NAME} \`${SRN}\`" >> "$FILENAME"

    for task in $(eval echo {1..$PROGRAMS});
    do
        # copy all the code
        echo "## Task ${task}" >>  "$FILENAME"

        echo "$(cat "t${task}/questions.txt")" >> "$FILENAME"

        echo '### `main.c`' >> "$FILENAME"
        echo '```c' >> "$FILENAME"
        echo "$(cat "t${task}/main.c")" >> "$FILENAME"
        echo '```' >> "$FILENAME"

        echo '### `utils.h`' >> "$FILENAME"
        echo '```c' >> "$FILENAME"
        echo "$(cat "t${task}/utils.h")" >> "$FILENAME"
        echo '```' >> "$FILENAME"

        echo '### `utils.c`' >> "$FILENAME"
        echo '```c' >> "$FILENAME"
        echo "$(cat "t${task}/utils.c")" >> "$FILENAME"
        echo '```' >> "$FILENAME"

        echo '### Console' >> "$FILENAME"
        echo '```' >> "$FILENAME"
        echo "$(cat "t${task}/output.txt")" >> "$FILENAME"
        echo '```' >> "$FILENAME"

    done

    for task in $(eval echo {1..$PRACTICE_PROGRAMS});
    do
        # copy all the code
        echo "## Practice Program ${task}" >>  "$FILENAME"

        echo "$(cat "pp${task}/questions.txt")" >> "$FILENAME"

        echo '### `main.c`' >> "$FILENAME"
        echo '```c' >> "$FILENAME"
        echo "$(cat "pp${task}/main.c")" >> "$FILENAME"
        echo '```' >> "$FILENAME"

        echo '### `utils.h`' >> "$FILENAME"
        echo '```c' >> "$FILENAME"
        echo "$(cat "pp${task}/utils.h")" >> "$FILENAME"
        echo '```' >> "$FILENAME"

        echo '### `utils.c`' >> "$FILENAME"
        echo '```c' >> "$FILENAME"
        echo "$(cat "pp${task}/utils.c")" >> "$FILENAME"
        echo '```' >> "$FILENAME"

        echo '### Console' >> "$FILENAME"
        echo '```' >> "$FILENAME"
        echo "$(cat "pp${task}/output.txt")" >> "$FILENAME"
        echo '```' >> "$FILENAME"
    done

else
    echo "Initializing week${WEEK_NUMBER} with ${PROGRAMS} tasks and ${PRACTICE_PROGRAMS} practices."
    mkdir -p "$ROOTDIR"
    cd "$ROOTDIR"
    echo "Creating Folders"
    eval $FOLDER_CREATION_COMMAND
    echo "Creating Files"
    eval $FILE_CREATION_COMMAND
    # copy makefile and C skeleton
    for folder in $(eval echo {t{1..$PROGRAMS},pp{1..$PRACTICE_PROGRAMS}});
    do
        echo "$(cat ~/college/sem2/UE20CS152/week3/t1/Makefile)" >> "$folder/Makefile"
        echo "$(cat ~/skeletons/skeleton.c)" >> "$folder/main.c"
    done
fi

