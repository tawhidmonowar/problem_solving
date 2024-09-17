fun solve() {

    val n = readln().toInt()
    val hash = "##"
    val dot =".."
    var resultEven = ""
    var resultOdd = ""

    for (i in 1..n) {
        if (i%2==0) {
            resultOdd+=dot
        } else {
            resultOdd+=hash
        }
    }

    for (i in 1..n) {
        if (i%2!=0) {
            resultEven+=dot
        } else {
            resultEven+=hash
        }
    }

    var odd = false

    for (i in 1..n) {
        if (!odd) {
            println(resultOdd)
            println(resultOdd)
            odd = true
        } else {
            println(resultEven)
            println(resultEven)
            odd = false
        }
    }

}

fun main() {
    val testCase = readln().toInt()
    for (i in 1..testCase) {
        solve()
    }
}