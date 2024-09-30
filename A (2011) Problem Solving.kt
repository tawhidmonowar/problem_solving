fun solve() {
    val n = readln().toInt()
    val numbers = readln().split(" ").map { it.toInt() }
    var temp = numbers[n-1]-1

    for (x in numbers) {
        if (x==temp) {
            println(temp)
            return
        }
    }

    println("Ambiguous")
}
fun main() {
    val testCase = readln().toInt()
    for (i in 1..testCase) {
        solve()
    }
}
