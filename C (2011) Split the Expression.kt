fun solve() {
    val str = readln()
    val strings = str.split("+")
    val n = strings.size

    var sum = strings[0].toLong()
    sum += strings[n - 1].toLong()

    for (i in 1 until n - 1) {

        var splitDone = false
        val temp = strings[i]

        var left_sum = ""
        var right_sum = ""
        var left_sum_l = ""
        var right_sum_l = ""

        if (temp[0] < temp[1]) {
            left_sum = temp.substring(0,1)
            right_sum = temp.substring(1)
            sum += left_sum.toLong()
            sum += right_sum.toLong()
            splitDone = true
        }


        if (!splitDone) {

            left_sum = temp.substring(0, temp.length - 1)
            right_sum = temp.substring(temp.length - 1)

            left_sum_l = temp.substring(0,1)
            right_sum_l = temp.substring(1)

            var one = left_sum.toLong()+right_sum.toLong()
            var two = left_sum_l.toLong()+right_sum_l.toLong()

            if (one>two) {
                sum +=one.toLong()
            }
            else
            {
                sum +=two.toLong()
            }

        }
    }

    println(sum)
}

fun main() {
    val testCase = readln().toInt()
    for (i in 1..testCase) {
        solve()
    }
}
