fun solve() {
    val id = readln()
    var temp = ""
    var res = ""
    var switch = false

    for (i in id.length - 1 downTo 0)
    {
        if (!switch) {

            if(id[i].toInt() > 96)
            {
                switch = true
                res+=id[i]
            }
            else
            {
                if (id[i]=='0') {
                    temp+=id[i]
                }
                else
                {
                    temp=""
                }
            }
        }
        else {
            res+=id[i]
        }
    }

    for (i in res.length - 1 downTo 0) {
        print(res[i])
    }

    println(temp)
}


fun main() {
    val testCase = readln().toInt()
    for (i in 1..testCase) {
        solve()
    }
}

