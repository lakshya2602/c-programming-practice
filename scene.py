from manim import *

class MathConcept(Scene):
    def construct(self):
        # 1. Title
        title = Text("Euler's Identity", font_size=40)
        self.play(Write(title))
        self.wait(1)
        self.play(title.animate.to_edge(UP))

        # 2. Formula
        formula = MathTex(r"e^{i\pi} + 1 = 0")
        self.play(Write(formula))
        self.wait(2)

        # 3. Highlight box
        box = SurroundingRectangle(formula, color=YELLOW, buff=MED_LARGE_BUFF)
        self.play(Create(box))
        self.wait(2)
