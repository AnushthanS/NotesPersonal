#! /bin/bash

touch sample
echo -e "123Sample\n0010027\nAssignment\n6questions" >> sample
grep [0-9] sample
