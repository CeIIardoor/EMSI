#!/bin/bash

echo -n "Entrer le nom complet : "

read fullname

#get first name 
firstname=${fullname%% *}
# ${nomc%% *}

#get middle name
middlename=${fullname#* }
# ${nomc% *}

#get last name
lastname=${fullname% *}
# ${nomc##* }