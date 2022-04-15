#!/bin/bash

usage () {
    echo "Usage: `basename $0` <param len>=5>" >&2
    exit 1
}

# param length >= 5

[$# -eq 1] && usage
[ ${#1} -lt 5 ] && usage


