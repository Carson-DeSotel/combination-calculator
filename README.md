# Combination Calculator
This calculator is used to calculate the combination of n things taken k at a time without replacement [(more information here)](https://en.wikipedia.org/wiki/Combination). This program is written entirely in C and is to be used with command line arguments. There exists no floating point variables (float, double) in the program, as a result of a combination always resulting in an integer value [(more information here)](https://math.stackexchange.com/questions/11601/proof-that-a-combination-is-an-integer).

## Usage:
To use this program, please compile using gcc on your machine.
the command line usage is as follows:

    `./combination-calculator <n> <r> <--latex> `

Where you can replace "./combination-calculator" with the name of your executable. If you're on a Windows machine, note that you should omit the "./" in front of the executable.
The <n> argument is the number of things to choose from.
The <r> argument is the number of things you're choosing from n.
The <--latex> argument is an option that will output a preformatted string that you can plug into your LaTeX files.

The LaTeX is output using the command \binom{}{} which is a part of the package 'amsmath'. You will need to add the package to your preamble.

## Examples:
Command Line Arguments:
![An example of execution](/etc/ex.PNG)

LaTeX command:
![An example of the output LaTeX command](/etc/latex.PNG)

LaTeX output:
![An example of the output LaTeX file](/etc/latex-result.PNG)
