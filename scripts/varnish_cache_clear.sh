#!/bin/bash

# Clear complete cache in multiple web server 
if [ -z $1]
then
  curl -X BAN http://54.254.102.251/
  curl -X BAN http://54.251.248.135/

# Clear cache of specific page 
else
  curl -X BAN http://54.254.102.251/$1
  curl -X BAN http://54.251.248.135/$1

fi
