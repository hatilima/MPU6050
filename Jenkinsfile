pipeline{
    agent any
    stages{
        stage('System Config'){
            steps{
                sh 'make --version'
            }
        }
        stage('Build'){
            steps{
                sh 'make'
            }
        }
        stage('Integration Tests'){
            steps{
                sh 'python --version'
            }
        }
    }
}