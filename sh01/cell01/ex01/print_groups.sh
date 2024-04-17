#!/bin/sh
id $FT_USER -Gn | tr ' ' ',' | tr -d '\n' 
