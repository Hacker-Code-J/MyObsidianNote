
```latex
%Website
%https://tikz.dev/

%Draw Plaid
\draw[very thin,color=gray!15,step=.5] (-5,-1.5) grid (5,2.5);

%Take Coordinates
\foreach \i in {-4,...,-2,-1,1,2,...,4}
\draw[] (\i,.1)--(\i,-.1) node[below] {$\i$};%x-axis
\foreach \i in {-1,1,2}
\draw[] (.1,\i)--(-.1,\i) node[left] {$\i$};%y-axis

%Draw dots
\foreach \angle/\label [count=\k from 0] in {30/$w_0$, 90/$w_1$, 150/$w_2$, 210/$w_3$, 270/$w_4$, 330/$w_5$} {
\coordinate (z\k) at (\angle:1);
\draw[fill, red] (z\k) circle (1.5pt) node[anchor={\angle-180}, shift={(0,0)}] {\label};
}

%Pattern
\usetikzlibrary{patterns,patterns.meta}
\draw[pattern={Lines[angle=45,distance={12pt/sqrt(3)}]}, pattern color=blue]

%Text above and below like summation
\usepackage{amsmath}
\DeclareMathOperator*{\mycup}{\cup}
```

