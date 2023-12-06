pipeline{
    agent any
    stages{
        stage('system_config'){
            steps{
                sh 'make --version'
            }
        }
        stage('build'){
            steps{
                sh 'make'
            }
        }
        stage('integration_tests'){
            steps{
                sh 'python --version'
            }
        }
    }
}