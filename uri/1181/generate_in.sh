#!/bin/bash

echo "$(( $RANDOM % 12 ))"

if [ "$(( $RANDOM % 2 ))" -eq 0 ]; then
    echo "S"
else
    echo "M"
fi

for i in $(seq 1 144); do
    echo "($(( $RANDOM % 10 )) + 1) * 2.3" | bc
done
