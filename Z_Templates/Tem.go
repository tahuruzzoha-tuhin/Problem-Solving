/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


package main

import (
	"fmt"
	"io"
	"os"
)

func solve(in io.Reader, out io.Writer) {
	var s string
	var last rune
	fmt.Fscan(in, &s)
	var ok bool = true
	
}

func main() {
	var t int
	fmt.Fscan(os.Stdin, &t)
	for i := 0; i < t; i++ {
		solve(os.Stdin, os.Stdout)
	}
}
