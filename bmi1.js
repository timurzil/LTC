function bmi(weight,height,sex)
{
let bmi_calc;
if (height>2) height = height/100;
bmi_calc = weight / height / height;

document.getElementById("bmi_out").innerHTML = bmi_calc.toFixed(1);
BMI_Evaluation(sex,bmi_calc);
}

function BMI_Evaluation(S, bmi_index)
{
let too_low = 18.5;
let obese = 32;
let too_high;
let str1;
if (S == 'M') {too_high = 27;} else { too_high = 25;}

if (bmi_index < too_low) {str1 = "BMI is too low"; }
    else if (bmi_index > obese) {str1 = "BMI above obesity limit";}
        else if (bmi_index > too_high) {str1 = "BMI is higher than normal";}
            else {str1 = "BMI is normal";}

document.getElementById("bmi_eval").innerHTML = str1;
return;
}

function fcheck_inputs()
{
h1 = For1.height1.value;
w1 = For1.weight1.value;
s1 = For1.sex.value;

if (isNaN(h1) || isNaN(w1) || s1 == "") 

{
    return 0;
}

bmi(w1, h1, s1);
return;
}





