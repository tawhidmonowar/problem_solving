fun main() {

    val testCase = readln().toInt()

    for (t in 1..testCase) {

        val n = readln().toInt()
        val input = readln()

        var A = 0
        var B = 0
        var C = 0
        var D = 0

        for (i in input.indices) {
            if (input[i] == 'A') {
                A++
            } else if (input[i] == 'B') {
                B++
            } else if (input[i] == 'C') {
                C++
            } else if (input[i] == 'D') {
                D++
            }
        }

        var result = 0


            if (A>=n) {
                result += n
            } else {
                result += A
            }

            if (B>=n) {
                result += n
            } else {
                result += B
            }

            if (C>=n) {
                result += n
            } else {
                result += C
            }

            if (D>=n) {
                result += n
            } else {
                result += D
            }



        println(result)

    }
}