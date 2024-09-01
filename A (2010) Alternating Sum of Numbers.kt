fun main() {

    val testCase = readln().toInt()

    for (t in 1..testCase) {

        val readLen = readln().toInt()
        val readLine = readln()
        val input = readLine.split(" ")
        var result = 0

        for (i in 0..<readLen) {
            if (i%2==0)
            {
                result+=input[i].toInt()

            } else
            {
                result-=input[i].toInt()
            }
        }

        println(result)

    }
}