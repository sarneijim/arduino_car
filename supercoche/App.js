import React from 'react';
import { StyleSheet, Text, View, Button } from 'react-native';
import {BleManager} from 'react-native-ble-manager'



export default class App extends React.Component {
  

  onItemClick = (event) => {
    console.log('hello');
  };

  render() {
    return (
      <View style={styles.container}>
        <Text id="text">Opjjjjen up App.js to start working on your app!</Text>
        <Button  onPress={this.onItemClick} title="Press Me"></Button>
      </View>
    );
  }
}



const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
