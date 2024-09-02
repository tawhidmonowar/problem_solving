fun solve() {

    val n = readln().toInt()
    val str = readln()
    var row = 0
    var one = 0

    if (str.length==4) {
        for (e in str) {
            if (e =='1') {
                one++
            }
        }
        if (one==4) {
            println("YES")
            return
        } else {
            println("NO")
            return
        }
    }

    for (e in str) {
        if (e !='0') {
            row++
        } else
        {
            row--
            break
        }
    }

    if ((row * row) == n) {
        println("YES")
        return
    } else {
        println("NO")
        return
    }

}

fun main() {
    val testCase = readln().toInt()
    for (i in 1..testCase) {
        solve()
    }
}