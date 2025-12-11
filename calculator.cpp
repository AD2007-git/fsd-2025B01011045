<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple Calculator</title>

    <style>
        body {
            background: #f3f3f3;
            font-family: Arial, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }

        .calc {
            background: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0px 0px 10px rgba(0,0,0,0.2);
            width: 300px;
        }

        input {
            width: 100%;
            padding: 10px;
            font-size: 18px;
            margin: 10px 0;
        }

        button {
            width: 48%;
            padding: 10px;
            font-size: 18px;
            margin: 5px 1%;
            cursor: pointer;
            border-radius: 5px;
            border: none;
            background: #008cff;
            color: white;
        }

        button:hover {
            background: #006ad1;
        }

        h2 {
            text-align: center;
        }
    </style>
</head>
<body>

    <div class="calc">
        <h2>Web Calculator</h2>

        <input type="number" id="num1" placeholder="Enter first number">

        <input type="number" id="num2" placeholder="Enter second number">

        <div>
            <button onclick="add()">+</button>
            <button onclick="sub()">−</button>
            <button onclick="mul()">×</button>
            <button onclick="divi()">÷</button>
        </div>

        <h3 id="result"></h3>
    </div>

    <script>
        function add() {
            let a = parseFloat(document.getElementById("num1").value);
            let b = parseFloat(document.getElementById("num2").value);
            document.getElementById("result").innerHTML = "Result = " + (a + b);
        }

        function sub() {
            let a = parseFloat(document.getElementById("num1").value);
            let b = parseFloat(document.getElementById("num2").value);
            document.getElementById("result").innerHTML = "Result = " + (a - b);
        }

        function mul() {
            let a = parseFloat(document.getElementById("num1").value);
            let b = parseFloat(document.getElementById("num2").value);
            document.getElementById("result").innerHTML = "Result = " + (a * b);
        }

        function divi() {
            let a = parseFloat(document.getElementById("num1").value);
            let b = parseFloat(document.getElementById("num2").value);
            if (b === 0) {
                document.getElementById("result").innerHTML = "Cannot divide by zero!";
            } else {
                document.getElementById("result").innerHTML = "Result = " + (a / b);
            }
        }
    </script>

</body>
</html>
