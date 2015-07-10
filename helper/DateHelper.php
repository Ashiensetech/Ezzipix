<?php

function getDurationStr($date){


    $second = 1;
    $minute = $second * 60;
    $hour = $minute * 60;
    $day = $hour*24;
    $month = $day * 30;
    $year = $month * 12;

    $diff = abs(strtotime($date) - strtotime(date("Y-m-d H:i:s"))); // return in second
    $diff = ($diff==0)?1:$diff;
    $seconds = intval($diff/$second);
    if($seconds<60){
        return $seconds.' second'.ifNeedS($seconds);
    }
    $minutes = intval($diff/$minute);
    if($minutes<60){
        return $minutes.' Minute'.ifNeedS($minutes);
    }
    $hours = intval($diff/$hour);
    if($hours<24){
        return $hours.' Hour'.ifNeedS($hours);
    }
    $days = intval($diff/$day);
    if($days<30){
        return $days.' Day'.ifNeedS($days);
    }
    $months = intval($diff/$month );
    if($months<12){
        return $months.' Month'.ifNeedS($month);
    }
    $years = intval($diff/$year);
    return $years;
}
function ifNeedS($val){
    return ($val<=1) ? "s":"";
}