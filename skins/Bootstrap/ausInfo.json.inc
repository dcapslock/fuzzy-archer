#from datetime import datetime
"ausInfo" : {
    "feelslikeLocal": {
        #set $lastWord = ""
        #for $nTemp in range(-39,51)
        "${nTemp}": "$aus.feelslike(float($nTemp), $datetime.now().timestamp())"#if $nTemp != 50#,#end if
        #end for
    }
}