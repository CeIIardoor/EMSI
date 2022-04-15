Public Class Form1
    Dim Total As Integer
    Dim prix As Integer
    Dim qte As Integer
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click


        If ComboBox1.SelectedItem = "shawarma avec frites" Then
            prix = 30
        ElseIf ComboBox1.SelectedItem = "pizza quatres fromages" Then
            prix = 35
        ElseIf ComboBox1.SelectedItem = "panini viande avec frites" Then
            prix = 30
        ElseIf ComboBox1.SelectedItem = "panini poulet avec frites" Then
            prix = 30
        ElseIf ComboBox1.SelectedItem = "pizza quatres saisons" Then
            prix = 35
        End If
        qte = TextBox1.Text
        Total += prix * qte
        ListBox1.Items.Add(qte & "x " & ComboBox1.SelectedItem & " - " & prix * qte)
        Label3.Text = Total


    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Total = 0
        Label3.Text = Total
        ListBox1.Items.Clear()
    End Sub


End Class
