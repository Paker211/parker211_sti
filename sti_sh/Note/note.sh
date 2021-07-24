
#### Shell prompt("$" and "#" different)
shell use "PS1" "PS2" to show prompt
   "PS1" --> outside prompt
   "PS2" --> inside prompt

Bash shell contain main prompt
   \a --> Ringing char
   \d --> "day mon year" format date
   \e --> ASCII escape char
   \h --> local host name
   \H --> qualified domain host name
   \j --> the number of shell terminal current job
   \l --> terminal device name
   \n --> ASCII next line char
   \r --> ASCII return char
   \s --> shell name
   \t --> "hr:min:sec" format time( 24hr )
   \T --> "hr:min:sec" format time( 12hr )
   \@ --> am/pm show \T
   \u --> user name
   \v --> bash shell version
   \V --> bash shell release level
   \w --> current working dirctory
   \W --> the name of current working dirctory
   \! --> the history number of this command in bash shell
   \# --> amount of this command
   \$ --> "$" for general user, "#" for super user( root )
   \nnn --> use for octal
   \\ --> Backslash
   \[ --> the start of control code sequence
   \] --> the end of control code sequence


#### Shell Variable( define, delete, readonly, type)

 - variable only store as String

 - three way define variable
    variable=value
    variable='value'
    variable="value"

 - Use variable
    ${var_name}

 - Different between ' ' and " "
    print output inside ' '( all string )
    print output inside " "( analyze var or command and out string )
    comment: digital --> not quoute
             all output --> use ' '
             else --> use " "

 - use command result assign variable
    variable=$(command)  common use
    variable=`command`
    Ex: ( Same  )
      log=$(cat log.txt)
      log=`cat log.txt`

 - Readonly
    Ex:
      readonly var_name

 - Unset variable( delete var )
    Ex:
      unset var_name

 - Type of variable( 3 )
   1. local variable
   2. envirnomental variable( usually capital )
   3. shell variable


### Shell special variable

   $0 -->
   $n -->
   $# -->
   $* -->
   $@ -->
   $? -->
   $$ -->


#### shell Alt(var alt, command alt, escape char)






#### Shell Operator



#### Shell Comment



#### Shell printf



#### Shell if...else..



#### Shell test



#### Shell case...esac



#### Shell for loop




#### Shell while loop



#### Shell until loop



#### Shell break and continue in loop



#### Shell function



#### Shell function parameters



#### Shell function







