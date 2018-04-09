#!/bin/bash
# declare STRING variable
STRING="Hello World"
#print variable on a screen
echo $STRING
echo -e "Hi! please type the word: \c"
read word
echo "The word you entered is: $word"
echo -e "Can you please enter two words?"
read word1 word2
echo "Here is your input: \"$word1\" \"$word2\""
echo -e "How do you feel about bash scripting?"
read
echo "You said $REPLY, I'm glad to hear that!"
echo -e "What are your three favorite colors?"
read -a colors
echo "My favorite colors are also ${colors[0]}, ${colors[1]} and ${colors[2]}:-)"
directory="./BashScripting"
if [ -d $directory ]; then
	echo "Directory exists"
else
	echo "Directory does not exists"
fi


