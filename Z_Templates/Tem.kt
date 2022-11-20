/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


import java.io.*
import java.util.*
import kotlin.math.*

class InputReader(stream: InputStream) {
    private var r = BufferedReader(InputStreamReader(stream), 32768)
    private var t = StringTokenizer("")
    private fun next(): String {
        while (!t.hasMoreTokens()) t = StringTokenizer(r.readLine())
        return t.nextToken()
    }

    fun nextInt() = java.lang.Integer.parseInt(next())
    fun nextLong() = java.lang.Long.parseLong(next())
    fun nextDouble() = java.lang.Double.parseDouble(next())
    fun nextLine() = r.readLine()!!
    fun nextIntArray(n: Int): ArrayList<Int> {
        val v = ArrayList<Int>(n)
        for (i in 0 until n) v.add(nextInt())
        return v
    }

    fun nextLongArray(n: Long): ArrayList<Long> {
        val v = ArrayList<Long>(n.toInt())
        for (i in 0 until n) v.add(nextLong())
        return v
    }
}

val cin: InputReader = InputReader(System.`in`)
val cout: PrintWriter = PrintWriter(System.`out`)

fun main() {
    solve()
    cout.close()
}
/////////////////////////////////////////////////

fun solve() {
    val n = cin.nextInt()
    val v = cin.nextIntArray(n)

    v.sort()
    val a = ArrayList<Int>()
    val b = ArrayList<Int>()

    
}
