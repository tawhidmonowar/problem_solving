fun solve() {

    val (a, b) = readln().split(' ').map { it.toInt() }

    if(a<b) {
        println("$a $b")
    } else {
        println("$b $a")
    }
}


fun main() {
    val testCase = readln().toInt()
    for (i in 1..testCase) {
        solve()
    }
}