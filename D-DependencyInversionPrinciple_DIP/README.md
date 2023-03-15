# Dependency Inversion Principle (DIP)

In this example we want the **Player** to interact with different world objects such as a **Door** or a **Lever**. So for this, in the $\textcolor{red}{\textsf{bad}}$ path side, we apply polymorphism to a function called **Activate** that changes how it behaves depending on the reference passed as a parameter. If is it a **Door**, the **Player** opens it, and if it is a **Lever** the **Player** turns it on.

To solve this, in the $\textcolor{green}{\textsf{good}}$ path side, we remove the polymorphism on the **Player** **Activate** function and create a new interface called **IActivator**  which will be implented on the **Door** and **Lever** classes respectivly. With this new change made, the **Activate** function on the **Player** will only pass a **IActivator** reference as a parameter, so the specific behaviour is defined on the class that implements it.
