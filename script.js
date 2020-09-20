
//          Copyright 黑米粥工作室 2020.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

function cal() {
    document.getElementById("sum").value = 
        (parseFloat(document.getElementById("aa").value) + 
        parseFloat(document.getElementById("ab").value)).toFixed(10);
}
function reset()
{
    document.getElementById("sum").value = 0;
    document.getElementById("aa").value = 0;
    document.getElementById("ab").value = 0;
}