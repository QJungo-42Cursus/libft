# ft_printf
**easier than the rest**
<br>
<br>
A easy re-implementations of the well known printf stdio function
<br>
We find thinks like :
- parsing `printf("show this value : %s")`
- base conversion 
- string manipulation

There is two main approach : 
1. Printing each time we find a new `%` and the variable it points to
2. Do all the parsing in one, convert, keep and print once everything is in converted in one string

I went with the second approach witch allow me later to re-implement `sprintf` (return the formatted string instead of printing it)
which is a really helpful function.