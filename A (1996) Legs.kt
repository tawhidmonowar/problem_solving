fun main() {

    val testCase = readln().toInt()

    for (i in 1..testCase) {

        val input = readln().toInt()

        if (input>=4) {
            var result = input/4
            val temp = 4*result
            result += (input-temp)/2
            println(result)
        } else {
            println(input/2)
        }

    }
}