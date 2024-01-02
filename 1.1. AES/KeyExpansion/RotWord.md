
[[1.1. AES/KeyExpansion/Key Expansion|Key Expansion]]

$$
\text{RotWord}(X_0\parallel X_1\parallel X_2\parallel X_3)=X_1\parallel X_2\parallel X_3\parallel X_0
$$

<div class="centered-content">
    <table style="margin: auto;">
	    <tr>
			<th>Input String</th>
	        <td style="background-color:magenta">X0</td>
	        <td style="background-color:cyan">X1</td>
	        <td style="background-color:cyan">X2</td>
	        <td style="background-color:cyan">X3</td>
	    </tr>
	    <tr>
		    <th></th>
	        <td style="background-color:red"></td>
	        <td style="background-color:red"></td>
	        <td style="background-color:red"></td>
	        <td style="background-color:red"></td>
	    </tr>
	    <tr>
			<th>word << 0x08</th>
	        <td style="background-color:cyan">X1</td>
	        <td style="background-color:cyan">X2</td>
	        <td style="background-color:cyan">X3</td>
	        <td style="background-color:chartreuse"></td>
	    </tr>
	    <tr>
		    <th>word >> 0x18 </th>
	        <td style="background-color:chartreuse"></td>
	        <td style="background-color:chartreuse"></td>
	        <td style="background-color:chartreuse"></td>
	        <td style="background-color:magenta">X0</td>
	    </tr>
	    <tr>
		    <th></th>
	        <td style="background-color:red"></td>
	        <td style="background-color:red"></td>
	        <td style="background-color:red"></td>
	        <td style="background-color:red"></td>
	    </tr>
	    <tr>
		    <th>Output String</th>
	        <td style="background-color:cyan">X1</td>
	        <td style="background-color:cyan">X2</td>
	        <td style="background-color:cyan">X3</td>
	        <td style="background-color:magenta">X0</td>
	    </tr>
	</table>
</div>


```c
u32 RotWord(u32 word) {
	return (word << 0x08) | (word >> 0x18);
}
```


