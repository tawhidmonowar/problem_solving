fun main () {
    val testCase = readln().toInt()
    for (t in 1..testCase) {
        var digit = readln().toInt()
        var result = 0
        var m = 0

        while (digit>0) {
            m = digit%10
            result += m
            digit /= 10
        }

        println(result)
    }
}