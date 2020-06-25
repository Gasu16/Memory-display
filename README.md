# Memory-display

##### ENGLISH #####
Source code to displaying some memory cells of our computer.
It should works only with the memory cells addressed by the program itself.
Due to security issues you shouldn't have access to memory of other processes.
You can modify the code to allocate a new memory area in this program and visualize it.

# How it works
The behavior of this program is simple, the user at first should choose an option between 1 and 0; 1 stands for automatic input (in this case the address of the variable "addr" itself already defined in the source code is used), otherwise you can use the 0 option which leads you to choose an address by yourself (remember you should use this only for accessing and displaying content of the memory allocated by this program).

The next step is to specify how many bytes from that address you want to read.

Then the program will show you the contents of the memory segments you requested for.

* compiling: gcc memshow.c -o memshow
* running: ./memshow

##### ITALIANO #####
Codice per visualizzare il contenuto di alcune celle di memoria.
Dovrebbe funzionare solamente con la memoria allocata dal programma stesso.
Per motivi di sicurezza non ti dovrebbe permettere di avere accesso alla memoria allocata da altri processi.
Puoi modificare il codice se vuoi e allocare una nuova area di memoria e visualizzarla.

# Come funziona
Il funzionamento di questo programma è semplice, l'utente per prima cosa sceglie una opzione tra 1 e 0; 1 sta per input automatico (in questo caso viene usato l'indirizzo della variabile "addr" già definita nel codice), altrimenti puoi scegliere l'opzione 0 che ti porterà a scrivere manualmente l'indirizzo di memoria di cui vorresti visualizzare il contenuto (ricordati che dovresti essere in grado di visualizzare solo le aree di memoria allocate da questo programma).

Lo step successivo consiste nello specificare quanti byte vorresti leggere partendo dall'indirizzo precedentemente scelto.

Infine il programma ti mostrerà come output il contenuto di questi segmenti di memoria.

* compilazione: gcc memshow.c -o memshow
* esecuzione: ./memshow

