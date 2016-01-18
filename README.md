# cop3530_hw1
COP3530 first homework insertion sort

-------------------------------------
Compiled on UF Linux servers<br>
~$ uname -a<br>
Linux thunderx 3.16.0-55-generic ###~##.##.#-Ubuntu SMP Tue Nov 17 10:15:59 UTC 2015 x86_64 x86_64 x86_64 GNU/Linux<br>
~$ g++ insertionsort.cpp -o insort<br>
~$ ./insort<br>
<br>
For some unknown reason, we have to compile it using gcc for the class...why...don't understand. But here's how to do that anyway (using the aforementioned Linux server):<br>
~$ gcc -Wall -o insort insertionsort.cpp -lstdc++ <br>
~$ ./insort<br>

-------------------------------------
Input set 1:<br>
5<br>
12<br>
19<br>
16<br>
17<br>
13<br>

Output set 1:<br>
12<br>
13<br>
16<br>
17<br>
19<br>

-------------------------------------
Input set 2:<br>
8<br>
6<br>
87<br>
67<br>
34<br>
10<br>
3<br>
2<br>
6<br>

Output set 2:<br>
2<br>
3<br>
6<br>
6<br>
10<br>
34<br>
67<br>
87<br>
