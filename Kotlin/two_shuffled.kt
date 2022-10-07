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

    var x = -1
    var y = -1

    for (i in v) {
        when {
            i > x -> {
                a.add(i)
                x = i
            }
            i > y -> {
                b.add(i)
                y = i
            }
            else -> {
                println("NO")
                return
            }
        }
    }

    if (a.size < b.size) {
        a.reverse()
    } else {
        b.reverse()
    }

    // cout.println("YES")
    // cout.println(a.size)
    // a.forEach { cout.print("$it ") }
    // cout.println()

    // cout.println(b.size)
    // b.forEach { cout.print("$it ") }

    cout.println("YES")
    cout.println(a.size)
    a.forEach { cout.print("$it ") }
    cout.println()

    cout.println(b.size)
    b.forEach { cout.print("$it ") }
}
