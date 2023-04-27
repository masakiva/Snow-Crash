# Snow-Crash

Snow-Crash is a security project from the 42 school, designed to teach students about common security flaws and how to exploit them. The project consists of a series of challenges that simulate real-world security issues.  
It is structured the same way as CTF (capture the flag) challenges.

I made this project along with my teammate [Fdidelot](https://github.com/Fdidelot), at 42 Paris.

The challenges cover a range of topics including buffer overflow attacks, reverse engineering, format string vulnerabilities, cryptography, race conditions, and more. Each challenge provides a description of the security issue and some initial information, and the student must use their knowledge and skills to find a solution.

Concretely, the challenges involve :
- decrypting passwords (levels 00, 01, 09)
- analyzing network packages (level 02)
- exploiting executable program vulnerabilities (levels 03, 08, 10, 13, 14)
- taking advantage of how an UNIX system works (levels 05, 07, 10)
- decrypting Perl scripts (levels 04, 12), PHP scripts (level 06)
- writing shell or C scripts (levels 09, 10, 13)

### Usage

Snow-Crash is designed to be run on a Linux machine.

Each level is a standalone program that needs to be exploited to retrieve the password for the next level. The password can be obtained by exploiting a vulnerability in the program and sending the correct input.
