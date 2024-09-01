fun main() {

    val testCase = readln().toInt()

    for (i in 1..testCase) {

        val readLine = readln()
        val input = readLine.split(" ")

        val a = input[0].toInt()
        val b = input[1].toInt()

        if (a==b) {
            println(a*2)
        } else {
            if (a>b) {
                println((a * 2) - 1)
            } else {
                println((b * 2) - 1)
            }
        }

    }
}