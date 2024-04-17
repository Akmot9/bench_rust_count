#!/bin/bash
start=$(date +%s%3N)
for i in {1..1000000}
do
   :
done
end=$(date +%s%3N)
echo "Time elapsed in counting to 1,000,000 is: $((end - start)) ms"
