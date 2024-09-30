fun solve() {
    val n = readln().toInt()
    print("1 ")
    for (i in n downTo 2)
    {
        print("$i ")
    }
    println()
}
fun main() {
    val testCase = readln().toInt()
    for (i in 1..testCase) {
        solve()
    }
}

